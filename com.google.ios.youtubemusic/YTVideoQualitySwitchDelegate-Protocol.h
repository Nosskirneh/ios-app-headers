//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTVideoQualitySwitchController;
@protocol MLVideoFormatConstraint;

@protocol YTVideoQualitySwitchDelegate <NSObject>
- (void)videoQualitySwitchController:(YTVideoQualitySwitchController *)arg1 didSelectFormatConstraint:(id <MLVideoFormatConstraint>)arg2;
- (id <MLVideoFormatConstraint>)videoFormatConstraintForVideoQualitySwitchController:(YTVideoQualitySwitchController *)arg1;
@end
