//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GHKBaseReceiverFetcher.h"

@class GHKConnectivity, NSString;

@interface GHKRecommendationsFetcher : GHKBaseReceiverFetcher
{
    GHKConnectivity *_connectivity;
    NSString *_latestQuery;
}

+ (_Bool)isFeelingLuckyJSONObject:(id)arg1;
+ (id)actionHelpUnitFromJSON:(id)arg1;
+ (id)helpUnitsForJSONObjects:(id)arg1 query:(id)arg2;
+ (id)objectionRequires;
+ (void)initialize;
@property(retain, nonatomic) NSString *latestQuery; // @synthesize latestQuery=_latestQuery;
@property(retain, nonatomic) GHKConnectivity *connectivity; // @synthesize connectivity=_connectivity;
- (void).cxx_destruct;
- (id)JSONObjectWithData:(id)arg1 error:(id *)arg2;
- (id)requestData;
- (void)fetchWithQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
