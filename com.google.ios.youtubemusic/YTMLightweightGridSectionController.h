//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMLightweightOfflineTrackingSectionController.h"

@class YTIGridColumnOverrideData, YTMMusicAnimatedThumbnailController;

@interface YTMLightweightGridSectionController : YTMLightweightOfflineTrackingSectionController
{
    YTIGridColumnOverrideData *_columnOverrideData;
    YTMMusicAnimatedThumbnailController *_animatedThumbnailStatusController;
    _Bool _requiresFocusUpdates;
}

- (_Bool)requiresFocusUpdates;
- (void).cxx_destruct;
- (_Bool)gridRendererContainsAnimatedThumbnails:(id)arg1;
- (_Bool)shouldLoadAnimatedThumbnails;
- (_Bool)shouldLoadAnimatedThumbnailForLightweightCell:(id)arg1;
- (unsigned long long)numberOfColumnsInSectionOverride;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 cellFactory:(id)arg3 sectionRenderer:(id)arg4;

@end

