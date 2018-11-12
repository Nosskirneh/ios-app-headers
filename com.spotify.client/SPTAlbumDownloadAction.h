//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class SPTAlbumViewModel;

@interface SPTAlbumDownloadAction : SPAction
{
    _Bool _isOffline;
    SPTAlbumViewModel *_model;
}

+ (id)provideTaskForAlbumDownloadWithViewModel:(id)arg1 logContext:(id)arg2;
@property(readonly, nonatomic) __weak SPTAlbumViewModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (id)iconColor;
- (long long)icon;
- (id)title;
- (id)initWitViewModel:(id)arg1 logContext:(id)arg2;

@end

