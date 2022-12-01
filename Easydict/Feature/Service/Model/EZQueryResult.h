//
//  EZQueryResult.h
//  Easydict
//
//  Created by tisfeng on 2022/11/30.
//  Copyright © 2022 izual. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZLanguageTool.h"

NS_ASSUME_NONNULL_BEGIN

@class EZQueryService;

typedef NSString *EZServiceType NS_STRING_ENUM;

FOUNDATION_EXPORT EZServiceType const EZServiceTypeGoogle;
FOUNDATION_EXPORT EZServiceType const EZServiceTypeBaidu;
FOUNDATION_EXPORT EZServiceType const EZServiceTypeYoudao;
FOUNDATION_EXPORT EZServiceType const EZServiceTypeApple;


@interface EZTranslatePhonetic : NSObject

/// 语种的中文名称
@property (nonatomic, copy) NSString *name;
/// 此语种对应的音标值
@property (nonatomic, copy, nullable) NSString *value;
/// 此音标对应的语音地址
@property (nonatomic, copy) NSString *speakURL;

@end


@interface EZTranslatePart : NSObject

/// 单词属性，例如 'n.'、'vi.' 等
@property (nonatomic, copy, nullable) NSString *part;
/// 此单词属性下单词的释义
@property (nonatomic, strong) NSArray<NSString *> *means;

@end


@interface EZTranslateExchange : NSObject

/// 形式的名字
@property (nonatomic, copy) NSString *name;
/// 对应形式的单词，可能是多个
@property (nonatomic, strong) NSArray<NSString *> *words;

@end


@interface EZTranslateSimpleWord : NSObject

/// 单词或短语
@property (nonatomic, copy) NSString *word;
/// 单词或短语属性
@property (nonatomic, copy, nullable) NSString *part;
/// 单词或短语意思
@property (nonatomic, strong, nullable) NSArray<NSString *> *means;

@end


@interface EZTranslateWordResult : NSObject

/// 音标
@property (nonatomic, strong, nullable) NSArray<EZTranslatePhonetic *> *phonetics;
/// 词性词义
@property (nonatomic, strong, nullable) NSArray<EZTranslatePart *> *parts;
/// 其他形式
@property (nonatomic, strong, nullable) NSArray<EZTranslateExchange *> *exchanges;
/// 中文查词时会有，单词短语数组
@property (nonatomic, strong, nullable) NSArray<EZTranslateSimpleWord *> *simpleWords;

@end


@interface EZQueryResult : NSObject

@property (nonatomic, copy) EZServiceType serviceType;

@property (nonatomic, assign) BOOL isShowing;
@property (nonatomic, assign) CGFloat cellHeight;


/// 此次查询的文本
@property (nonatomic, copy) NSString *text;
/// 此翻译接口的在线查询地址
@property (nonatomic, copy) NSString *link;
/// 由翻译接口提供的源语种，可能会与查询对象的 from 不同
@property (nonatomic, assign) EZLanguage from;
/// 由翻译接口提供的目标语种，注意可能会与查询对象的 to 不同
@property (nonatomic, assign) EZLanguage to;
/// 中文查词或英文查词的情况下，翻译接口会返回这个单词（词组）的详细释义
@property (nonatomic, strong, nullable) EZTranslateWordResult *wordResult;
/// 普通翻译结果，可以有多条（一个段落对应一个翻译结果）
@property (nonatomic, strong, nullable) NSArray<NSString *> *normalResults;
/// 查询文本的发音地址
@property (nonatomic, copy, nullable) NSString *fromSpeakURL;
/// 翻译后的发音地址
@property (nonatomic, copy, nullable) NSString *toSpeakURL;
/// 翻译接口提供的原始的、未经转换的查询结果
@property (nonatomic, strong) id raw;

@end

NS_ASSUME_NONNULL_END