//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

@class YTAppCompanionAdCell, YTIAppPromoCompanionAdRenderer;

@interface YTAppCompanionAdCellController : YTInnerTubeCellController
{
    YTIAppPromoCompanionAdRenderer *_companionAd;
    YTAppCompanionAdCell *_appCompanionAdCell;
}

- (void).cxx_destruct;
- (void)didPressCallToActionButton;
- (void)didPressActionButton;
- (_Bool)shouldSelectItem;
- (void)cellWillBecomeVisibleWithVisibilityEventType:(int)arg1;
- (void)setCell:(id)arg1;
- (void)dealloc;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

@end

