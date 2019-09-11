//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTHubContentOperationFactory, SPTHubRemoteContentOperationURLResolver, SPTOnDemandSet;

@interface SPTPodcastEpisodeFeaturedContentContentOperationFactory : NSObject
{
    id <SPTHubContentOperationFactory> _hubContentOperationFactory;
    id <SPTHubRemoteContentOperationURLResolver> _URLResolver;
    id <SPTOnDemandSet> _onDemandSet;
}

@property(readonly, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(readonly, nonatomic) id <SPTHubRemoteContentOperationURLResolver> URLResolver; // @synthesize URLResolver=_URLResolver;
@property(readonly, nonatomic) id <SPTHubContentOperationFactory> hubContentOperationFactory; // @synthesize hubContentOperationFactory=_hubContentOperationFactory;
- (void).cxx_destruct;
- (id)createContentOperationsForReferrerIdentifier:(id)arg1;
- (id)initWithHubContentOperationFactory:(id)arg1 URLResolver:(id)arg2 onDemandSet:(id)arg3;

@end

