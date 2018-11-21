//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTPodcastRecommendationsSectionTitleContentOperation;
@protocol EXP_SPTHubContentOperationFactory, EXP_SPTHubRemoteContentOperationURLResolver;

@interface SPTPodcastRecommendationsContentOperationsFactory : NSObject
{
    id <EXP_SPTHubContentOperationFactory> _hubContentOperationFactory;
    id <EXP_SPTHubRemoteContentOperationURLResolver> _URLResolver;
    SPTPodcastRecommendationsSectionTitleContentOperation *_titleContentOperation;
}

@property(readonly, nonatomic) SPTPodcastRecommendationsSectionTitleContentOperation *titleContentOperation; // @synthesize titleContentOperation=_titleContentOperation;
@property(readonly, nonatomic) id <EXP_SPTHubRemoteContentOperationURLResolver> URLResolver; // @synthesize URLResolver=_URLResolver;
@property(readonly, nonatomic) id <EXP_SPTHubContentOperationFactory> hubContentOperationFactory; // @synthesize hubContentOperationFactory=_hubContentOperationFactory;
- (void).cxx_destruct;
- (id)createContentOperationsForReferrerIdentifier:(id)arg1;
- (id)initWithHubContentOperationFactory:(id)arg1 URLResolver:(id)arg2 titleContentOperation:(id)arg3;

@end

