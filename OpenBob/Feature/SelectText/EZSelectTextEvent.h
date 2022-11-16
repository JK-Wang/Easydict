//
//  EZSelectTextEvent.h
//  Open Bob
//
//  Created by tisfeng on 2022/11/16.
//  Copyright © 2022 izual. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSelectTextEvent : NSObject

+ (void)getText:(void (^)(NSString *_Nullable text))completion;

@end

NS_ASSUME_NONNULL_END