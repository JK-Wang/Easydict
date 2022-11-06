//
//  QueryCell.h
//  Bob
//
//  Created by tisfeng on 2022/11/4.
//  Copyright © 2022 ripperhe. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "QueryView.h"

NS_ASSUME_NONNULL_BEGIN

@interface QueryCell : NSTableRowView

@property (nonatomic, strong) QueryView *queryView;

@property (nonatomic, strong) NSTextView *textView;

@property (nonatomic, copy) NSString *queryText;
@property (nonatomic, copy) NSString *detectLanguage;

@property (nonatomic, copy) void (^audioActionBlock)(QueryView *view);
@property (nonatomic, copy) void (^copyActionBlock)(QueryView *view);
@property (nonatomic, copy) void (^enterActionBlock)(QueryView *view);
@end

NS_ASSUME_NONNULL_END