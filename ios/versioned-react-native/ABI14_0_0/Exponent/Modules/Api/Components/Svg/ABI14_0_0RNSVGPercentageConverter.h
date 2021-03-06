/**
 * Copyright (c) 2015-present, Horcrux.
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface ABI14_0_0RNSVGPercentageConverter : NSObject

- (NSRegularExpression *) getPercentageRegularExpression;

- (instancetype) initWithRelativeAndOffset:(CGFloat)relative offset:(CGFloat)offset;

- (CGFloat) percentageToFloat:(NSString *)percentage relative:(CGFloat)relative offset:(CGFloat)offset;

- (CGFloat) percentageToFloat:(NSString *)percentage;

- (CGFloat) stringToFloat:(NSString *)string relative:(CGFloat)relative offset:(CGFloat)offset;

- (CGFloat) stringToFloat:(NSString *)string;

- (BOOL) isPercentage:(NSString *) string;

@end
