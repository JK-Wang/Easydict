//
//  EZEnumTypes.h
//  Easydict
//
//  Created by tisfeng on 2023/4/18.
//  Copyright © 2023 izual. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const EZServiceTypeKey;

typedef NSString *EZServiceType NS_STRING_ENUM;
FOUNDATION_EXPORT EZServiceType const EZServiceTypeGoogle;
FOUNDATION_EXPORT EZServiceType const EZServiceTypeBaidu;
FOUNDATION_EXPORT EZServiceType const EZServiceTypeYoudao;
FOUNDATION_EXPORT EZServiceType const EZServiceTypeApple;
FOUNDATION_EXPORT EZServiceType const EZServiceTypeDeepL;
FOUNDATION_EXPORT EZServiceType const EZServiceTypeVolcano;
FOUNDATION_EXPORT EZServiceType const EZServiceTypeOpenAI;


FOUNDATION_EXPORT NSString *const EZQueryServiceTypeKey;
typedef NS_OPTIONS(NSUInteger, EZQueryServiceType) {
    EZQueryServiceTypeNone = 0,
    EZQueryServiceTypeTranslation = 1 << 0,
    EZQueryServiceTypeDictionary = 1 << 1,
    EZQueryServiceTypeSentence = 1 << 2,
};


FOUNDATION_EXPORT NSString *const EZServiceUsageStatusKey;
typedef NS_ENUM(NSUInteger, EZServiceUsageStatus) {
    EZServiceUsageStatusDefault = 0,
    EZServiceUsageStatusAlwaysOff = 1,
    EZServiceUsageStatusAlwaysOn = 2,
};

FOUNDATION_EXPORT NSString *const EZDeepLTranslationAPIKey;
typedef NS_ENUM(NSUInteger, EZDeepLTranslationAPI) {
    EZDeepLTranslationAPIWebFirst = 0,
    EZDeepLTranslationAPIOfficialFirst = 1,
    EZDeepLTranslationAPIOnlyOfficical = 2,
};


typedef NSString *EZQueryType NS_STRING_ENUM;
FOUNDATION_EXPORT EZQueryType const EZQueryTypeAutoSelect;
FOUNDATION_EXPORT EZQueryType const EZQueryTypeShortcut;
FOUNDATION_EXPORT EZQueryType const EZQueryTypeInput;
FOUNDATION_EXPORT EZQueryType const EZQueryTypeOCR;


typedef NSString *EZSelectTextType NS_STRING_ENUM;
FOUNDATION_EXPORT EZSelectTextType const EZSelectTextTypeAuxiliary;
FOUNDATION_EXPORT EZSelectTextType const EZSelectTextTypeSimulateKey; // Cmd+C


FOUNDATION_EXPORT NSString *const EZDefaultTTSServiceKey;
typedef NS_ENUM(NSUInteger, EZTTSServiceType) {
    EZTTSServiceTypeApple = 0,
    EZTTSServiceTypeBaidu = 1,
    EZTTSServiceTypeGoogle = 2,
};

NS_ASSUME_NONNULL_END
