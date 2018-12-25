//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GCKMediaMetadata, GCKMediaTextTrackStyle, NSArray, NSMutableArray, NSString;

@interface GCKMediaInformation : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_contentID;
    id _customData;
    long long _streamType;
    NSString *_contentType;
    GCKMediaMetadata *_metadata;
    NSArray *_adBreaks;
    NSArray *_adBreakClips;
    double _streamDuration;
    NSMutableArray *_mediaTracks;
    GCKMediaTextTrackStyle *_textTrackStyle;
    NSString *_entity;
    double _startAbsoluteTime;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double startAbsoluteTime; // @synthesize startAbsoluteTime=_startAbsoluteTime;
@property(readonly, nonatomic) id customData; // @synthesize customData=_customData;
@property(copy, nonatomic) NSString *entity; // @synthesize entity=_entity;
@property(copy, nonatomic) GCKMediaTextTrackStyle *textTrackStyle; // @synthesize textTrackStyle=_textTrackStyle;
@property(copy, nonatomic) NSMutableArray *mediaTracks; // @synthesize mediaTracks=_mediaTracks;
@property(readonly, nonatomic) double streamDuration; // @synthesize streamDuration=_streamDuration;
@property(copy, nonatomic) NSArray *adBreakClips; // @synthesize adBreakClips=_adBreakClips;
@property(copy, nonatomic) NSArray *adBreaks; // @synthesize adBreaks=_adBreaks;
@property(readonly, nonatomic) GCKMediaMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) long long streamType; // @synthesize streamType=_streamType;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)updateFromBreakInfoJSONObject:(id)arg1;
- (id)mediaTrackWithID:(long long)arg1;
- (id)JSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithContentID:(id)arg1 streamType:(long long)arg2 contentType:(id)arg3 metadata:(id)arg4 adBreaks:(id)arg5 adBreakClips:(id)arg6 streamDuration:(double)arg7 mediaTracks:(id)arg8 textTrackStyle:(id)arg9 customData:(id)arg10;
- (id)initWithContentID:(id)arg1 streamType:(long long)arg2 contentType:(id)arg3 metadata:(id)arg4 streamDuration:(double)arg5 mediaTracks:(id)arg6 textTrackStyle:(id)arg7 customData:(id)arg8;
- (id)initWithContentID:(id)arg1 streamType:(long long)arg2 contentType:(id)arg3 metadata:(id)arg4 adBreaks:(id)arg5 adBreakClips:(id)arg6 streamDuration:(double)arg7 mediaTracks:(id)arg8 textTrackStyle:(id)arg9 entity:(id)arg10 startAbsoluteTime:(double)arg11 customData:(id)arg12;

@end

