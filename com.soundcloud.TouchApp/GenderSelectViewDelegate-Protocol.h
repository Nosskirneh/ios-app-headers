//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GenderSelectView, NSString, UIButton;

@protocol GenderSelectViewDelegate <NSObject>
- (void)genderSelectView:(GenderSelectView *)arg1 didTapCustomButton:(UIButton *)arg2;
- (void)genderSelectView:(GenderSelectView *)arg1 didChangeCustomGender:(NSString *)arg2;
@end

