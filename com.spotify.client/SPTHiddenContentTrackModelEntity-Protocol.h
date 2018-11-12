//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTHiddenContentModelEntity-Protocol.h"

@class NSString, NSURL;
@protocol SPTHiddenContentTrackModelEntity;

@protocol SPTHiddenContentTrackModelEntity <NSObject, SPTHiddenContentModelEntity>
@property(readonly, nonatomic, getter=isExplicit) _Bool explicit;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *trackName;
@property(readonly, copy, nonatomic) NSString *previewId;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
@property(readonly, copy, nonatomic) NSString *artistName;
@property(readonly, copy, nonatomic) NSString *albumName;
@property(readonly, nonatomic) NSURL *albumImageURL;
- (_Bool)isEqualToTrackModelEntity:(id <SPTHiddenContentTrackModelEntity>)arg1;
@end

