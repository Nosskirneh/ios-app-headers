//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMCardViewModel.h"

@class GPMBottomSheetMessageDismissalInfo, GPMBottomSheetMessageLoggingInfo, NSArray, UIColor;

@interface GPMBottomSheetMessageViewModel : GPMCardViewModel
{
    _Bool _canTapOutsideToDismiss;
    UIColor *_titleColor;
    UIColor *_subtitleColor;
    NSArray *_buttonViewModels;
    GPMBottomSheetMessageLoggingInfo *_loggingInfo;
    GPMBottomSheetMessageDismissalInfo *_dismissalInfo;
}

@property(readonly, nonatomic) _Bool canTapOutsideToDismiss; // @synthesize canTapOutsideToDismiss=_canTapOutsideToDismiss;
@property(readonly, nonatomic) GPMBottomSheetMessageDismissalInfo *dismissalInfo; // @synthesize dismissalInfo=_dismissalInfo;
@property(readonly, nonatomic) GPMBottomSheetMessageLoggingInfo *loggingInfo; // @synthesize loggingInfo=_loggingInfo;
@property(copy, nonatomic) NSArray *buttonViewModels; // @synthesize buttonViewModels=_buttonViewModels;
@property(copy, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (void).cxx_destruct;
- (id)initWithIJMessage:(struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1Message *)arg1;

@end

