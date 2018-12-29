//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface _TtC4WiMP13PlayQueueItem : NSObject
{
    // Error parsing type: , name: type
    // Error parsing type: , name: itemId
    // Error parsing type: , name: uuid
    // Error parsing type: , name: cutTrackId
    // Error parsing type: , name: guid
    // Error parsing type: , name: albumId
    // Error parsing type: , name: imageResourceId
    // Error parsing type: , name: isActive
    // Error parsing type: , name: isExplicit
    // Error parsing type: , name: isLive
    // Error parsing type: , name: title
    // Error parsing type: , name: artistTitle
    // Error parsing type: , name: originatingPlaylistUuid
    // Error parsing type: , name: albumTitle
    // Error parsing type: , name: duration
    // Error parsing type: , name: version
    // Error parsing type: , name: audioQuality
    // Error parsing type: , name: authenticationToken
}

+ (id)playQueueItemFromMediaQueueItem:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *debugDescription;
- (id)copyItem;
- (id)modifiedVersionText;
- (id)titleWithVersionInfo;
- (id)mediaItemInContext:(id)arg1;
- (id)dictionaryForEntity:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) NSString *authenticationToken; // @synthesize authenticationToken;
@property(nonatomic, copy) NSString *audioQuality; // @synthesize audioQuality;
@property(nonatomic, copy) NSString *version; // @synthesize version;
@property(nonatomic) float duration; // @synthesize duration;
@property(nonatomic, copy) NSString *albumTitle; // @synthesize albumTitle;
@property(nonatomic, copy) NSString *originatingPlaylistUuid; // @synthesize originatingPlaylistUuid;
@property(nonatomic, copy) NSString *artistTitle; // @synthesize artistTitle;
@property(nonatomic, copy) NSString *title; // @synthesize title;
@property(nonatomic) _Bool isLive; // @synthesize isLive;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit;
@property(nonatomic) _Bool isActive; // @synthesize isActive;
@property(nonatomic, copy) NSString *imageResourceId; // @synthesize imageResourceId;
@property(nonatomic) long long albumId; // @synthesize albumId;
@property(nonatomic, copy) NSString *guid; // @synthesize guid;
@property(nonatomic, copy) NSString *uuid; // @synthesize uuid;
@property(nonatomic) long long type; // @synthesize type;
- (id)customDataForItem;

@end

