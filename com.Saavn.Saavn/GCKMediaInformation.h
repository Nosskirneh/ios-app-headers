//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GCKMediaMetadata, GCKMediaTextTrackStyle, NSArray, NSString;

@interface GCKMediaInformation : NSObject <NSCopying>
{
    NSString *_contentID;
    id _customData;
    long long _streamType;
    NSString *_contentType;
    GCKMediaMetadata *_metadata;
    double _streamDuration;
    NSArray *_mediaTracks;
    GCKMediaTextTrackStyle *_textTrackStyle;
}

@property(readonly, nonatomic) id customData; // @synthesize customData=_customData;
@property(copy, nonatomic) GCKMediaTextTrackStyle *textTrackStyle; // @synthesize textTrackStyle=_textTrackStyle;
@property(copy, nonatomic) NSArray *mediaTracks; // @synthesize mediaTracks=_mediaTracks;
@property(readonly, nonatomic) double streamDuration; // @synthesize streamDuration=_streamDuration;
@property(readonly, nonatomic) GCKMediaMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) long long streamType; // @synthesize streamType=_streamType;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)JSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithContentID:(id)arg1 streamType:(long long)arg2 contentType:(id)arg3 metadata:(id)arg4 streamDuration:(double)arg5 customData:(id)arg6;
- (id)initWithContentID:(id)arg1 streamType:(long long)arg2 contentType:(id)arg3 metadata:(id)arg4 streamDuration:(double)arg5 mediaTracks:(id)arg6 textTrackStyle:(id)arg7 customData:(id)arg8;

@end

