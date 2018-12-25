//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMutableInnerTubeControllerFactory.h"

@class GIMMe;
@protocol YTDataServices, YTMServices, YTOfflineServices, YTShareServices;

@interface YTMInnerTubeControllerFactory : YTMutableInnerTubeControllerFactory
{
    id <YTMServices> _services;
    id <YTDataServices> _dataServices;
    id <YTOfflineServices> _offlineServices;
    id <YTShareServices> _shareServices;
    GIMMe *_gimme;
}

@property(readonly, nonatomic) __weak id <YTMServices> services; // @synthesize services=_services;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)navControllerWithRoot:(id)arg1 parentResponder:(id)arg2;
- (_Bool)isModalViewControllerForNavigationEndpoint:(id)arg1;
- (void)addSectionControllerFactoryBlocks;
- (void)addViewControllerModelBlocks;
- (void)addViewControllerNavigationEndpointBlocks;
- (id)lightweightViewControllerForModelClass:(Class)arg1 service:(id)arg2 parentResponder:(id)arg3;
- (id)init;

@end

