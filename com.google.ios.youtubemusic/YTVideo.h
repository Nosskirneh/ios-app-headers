//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSDictionary, NSString, YTVideoState;

@interface YTVideo : NSObject <NSCopying>
{
    NSString *_ID;
    NSString *_title;
    NSString *_videoDescription;
    NSString *_uploaderDisplayName;
    NSDate *_publishedDate;
    unsigned long long _viewCount;
    YTVideoState *_state;
    NSDictionary *_thumbnailURLs;
}

@property(readonly, nonatomic) NSDictionary *thumbnailURLs; // @synthesize thumbnailURLs=_thumbnailURLs;
@property(readonly, nonatomic) YTVideoState *state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned long long viewCount; // @synthesize viewCount=_viewCount;
@property(readonly, nonatomic) NSDate *publishedDate; // @synthesize publishedDate=_publishedDate;
@property(readonly, nonatomic) NSString *uploaderDisplayName; // @synthesize uploaderDisplayName=_uploaderDisplayName;
@property(readonly, nonatomic) NSString *videoDescription; // @synthesize videoDescription=_videoDescription;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (_Bool)isInteractable;
- (_Bool)isPlayable;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithID:(id)arg1 title:(id)arg2 description:(id)arg3 uploaderDisplayName:(id)arg4 publishedDate:(id)arg5 viewCount:(unsigned long long)arg6 state:(id)arg7 thumbnailURLs:(id)arg8;

@end

