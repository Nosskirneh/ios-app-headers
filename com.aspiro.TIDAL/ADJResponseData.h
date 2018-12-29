//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class ADJAttribution, NSDictionary, NSString;

@interface ADJResponseData : NSObject <NSCopying>
{
    _Bool _success;
    _Bool _willRetry;
    int _activityKind;
    int _trackingState;
    NSString *_message;
    NSString *_timeStamp;
    NSString *_adid;
    NSDictionary *_jsonResponse;
    ADJAttribution *_attribution;
}

+ (id)buildResponseData:(id)arg1;
+ (id)responseData;
@property(copy, nonatomic) ADJAttribution *attribution; // @synthesize attribution=_attribution;
@property(retain, nonatomic) NSDictionary *jsonResponse; // @synthesize jsonResponse=_jsonResponse;
@property(nonatomic) int trackingState; // @synthesize trackingState=_trackingState;
@property(nonatomic) _Bool willRetry; // @synthesize willRetry=_willRetry;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *adid; // @synthesize adid=_adid;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) int activityKind; // @synthesize activityKind=_activityKind;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end

