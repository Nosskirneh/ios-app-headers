//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ADJResponseData.h"

@class NSString;

@interface ADJEventResponseData : ADJResponseData
{
    NSString *_eventToken;
}

+ (id)responseDataWithActivityPackage:(id)arg1;
@property(copy, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)failureResponseData;
- (id)successResponseData;
- (id)initWithActivityPackage:(id)arg1;

@end

