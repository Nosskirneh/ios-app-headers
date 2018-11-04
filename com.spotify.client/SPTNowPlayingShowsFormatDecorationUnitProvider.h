//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseUnitProvider.h"

@class SPTNowPlayingModel;

@interface SPTNowPlayingShowsFormatDecorationUnitProvider : SPTNowPlayingBaseUnitProvider
{
    SPTNowPlayingModel *_model;
    id <SPTNowPlayingTestManager> _testManager;
    id <SPTNowPlayingContentProviderRegistries> _contentProviderRegistries;
}

@property(readonly, nonatomic) __weak id <SPTNowPlayingContentProviderRegistries> contentProviderRegistries; // @synthesize contentProviderRegistries=_contentProviderRegistries;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)createMainContainerUnit:(id)arg1;
- (void)processPlayerStateChange:(id)arg1 toggleMode:(unsigned long long)arg2;
- (id)initWithPlayer:(id)arg1 nowPlayingModel:(id)arg2 contentProviderRegistries:(id)arg3 testManager:(id)arg4 nowPlayingManager:(id)arg5;

@end

