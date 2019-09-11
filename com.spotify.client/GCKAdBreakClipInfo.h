//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GCKVASTAdsRequest, NSString, NSURL;

@interface GCKAdBreakClipInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_adBreakClipID;
    double _duration;
    NSString *_title;
    NSURL *_clickThroughURL;
    NSURL *_contentURL;
    NSString *_mimeType;
    NSString *_contentID;
    NSURL *_posterURL;
    double _whenSkippable;
    long long _hlsSegmentFormat;
    GCKVASTAdsRequest *_vastAdsRequest;
    id _customData;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id customData; // @synthesize customData=_customData;
@property(retain, nonatomic) GCKVASTAdsRequest *vastAdsRequest; // @synthesize vastAdsRequest=_vastAdsRequest;
@property(nonatomic) long long hlsSegmentFormat; // @synthesize hlsSegmentFormat=_hlsSegmentFormat;
@property(nonatomic) double whenSkippable; // @synthesize whenSkippable=_whenSkippable;
@property(retain, nonatomic) NSURL *posterURL; // @synthesize posterURL=_posterURL;
@property(retain, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(retain, nonatomic) NSURL *clickThroughURL; // @synthesize clickThroughURL=_clickThroughURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *adBreakClipID; // @synthesize adBreakClipID=_adBreakClipID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)JSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithAdBreakClipID:(id)arg1 title:(id)arg2 duration:(double)arg3 mimeType:(id)arg4 clickThroughURL:(id)arg5 contentURL:(id)arg6 contentID:(id)arg7 posterURL:(id)arg8 whenSkippable:(double)arg9 hlsSegmentFormat:(long long)arg10 VASTAdsRequest:(id)arg11 customData:(id)arg12;

@end

