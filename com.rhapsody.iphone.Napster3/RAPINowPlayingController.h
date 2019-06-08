//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPIController.h"

#import "RAPIListScreenDelegate-Protocol.h"

@class NSString, RAPIListScreenConfig, UIImage;

@interface RAPINowPlayingController : RAPIController <RAPIListScreenDelegate>
{
    RAPIListScreenConfig *_config;
    long long _pendingImagesCount;
    UIImage *_stationImage;
}

@property(retain) UIImage *stationImage; // @synthesize stationImage=_stationImage;
@property long long pendingImagesCount; // @synthesize pendingImagesCount=_pendingImagesCount;
@property(retain, nonatomic) RAPIListScreenConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)invalidateImageForRow:(unsigned long long)arg1;
- (void)invalidate;
- (id)promiseForPendingImages;
- (_Bool)isMasterOptionButtonChecked;
- (long long)getTargetScreenForRow:(long long)arg1 forGroup:(long long)arg2;
- (id)getImageForRow:(long long)arg1 forGroup:(long long)arg2 withPreferredSize:(struct CGSize)arg3;
- (id)getStringForLine:(long long)arg1 forRow:(long long)arg2 forGroup:(long long)arg3;
- (long long)getItemCountForGroup:(long long)arg1;
- (long long)getGroupCount;
- (id)getTitle;
- (void)handleOnItemClicked:(long long)arg1 forGroup:(long long)arg2;
- (void)onFocused;
- (id)getScreenConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

