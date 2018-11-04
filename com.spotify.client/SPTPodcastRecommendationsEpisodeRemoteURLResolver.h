//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_SPTHubRemoteContentOperationURLResolver.h"

@class NSString, NSURL;

@interface SPTPodcastRecommendationsEpisodeRemoteURLResolver : NSObject <EXP_SPTHubRemoteContentOperationURLResolver>
{
    NSURL *_URL;
    NSString *_spaceName;
    unsigned long long _limit;
    id <SPTProductState> _productState;
}

+ (id)dateFormatter;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) NSString *spaceName; // @synthesize spaceName=_spaceName;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)resolveContentURL;
- (id)initWithEpisodeURL:(id)arg1 spaceName:(id)arg2 limit:(unsigned long long)arg3 productState:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

