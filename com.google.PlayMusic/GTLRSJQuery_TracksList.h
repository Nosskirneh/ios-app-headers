//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRSJQuery.h"

@class NSString;

@interface GTLRSJQuery_TracksList : GTLRSJQuery
{
}

+ (id)queryWithDv:(long long)arg1 hl:(id)arg2 tier:(id)arg3;
+ (id)parameterNameMap;

// Remaining properties
@property(nonatomic) long long artDimension; // @dynamic artDimension;
@property(nonatomic) _Bool checkExpiration; // @dynamic checkExpiration;
@property(copy, nonatomic) NSString *clientBuildType; // @dynamic clientBuildType;
@property(copy, nonatomic) NSString *contextToken; // @dynamic contextToken;
@property(nonatomic) long long dv; // @dynamic dv;
@property(copy, nonatomic) NSString *hl; // @dynamic hl;
@property(nonatomic) long long maxResults; // @dynamic maxResults;
@property(nonatomic) _Bool newResultsExpected; // @dynamic newResultsExpected;
@property(copy, nonatomic) NSString *serverOpts; // @dynamic serverOpts;
@property(copy, nonatomic) NSString *startToken; // @dynamic startToken;
@property(copy, nonatomic) NSString *tier; // @dynamic tier;
@property(nonatomic) long long updatedMin; // @dynamic updatedMin;

@end
