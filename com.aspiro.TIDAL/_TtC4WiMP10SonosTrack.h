//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, _TtC4WiMP10SonosAlbum, _TtC4WiMP11SonosArtist, _TtC4WiMP27SonosUniversalMusicObjectId;

@interface _TtC4WiMP10SonosTrack : NSObject
{
    // Error parsing type: , name: type
    // Error parsing type: , name: name
    // Error parsing type: , name: mediaUrl
    // Error parsing type: , name: imageUrl
    // Error parsing type: , name: contentType
    // Error parsing type: , name: album
    // Error parsing type: , name: artist
    // Error parsing type: , name: id
    // Error parsing type: , name: durationMillis
    // Error parsing type: , name: trackNumber
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)getParameterTypes;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(nonatomic, retain) _TtC4WiMP27SonosUniversalMusicObjectId *id; // @synthesize id;
@property(nonatomic, retain) _TtC4WiMP11SonosArtist *artist; // @synthesize artist;
@property(nonatomic, retain) _TtC4WiMP10SonosAlbum *album; // @synthesize album;
@property(nonatomic, copy) NSString *contentType; // @synthesize contentType;
@property(nonatomic, copy) NSString *imageUrl; // @synthesize imageUrl;
@property(nonatomic, copy) NSString *mediaUrl; // @synthesize mediaUrl;
@property(nonatomic, copy) NSString *name; // @synthesize name;
@property(nonatomic, copy) NSString *type; // @synthesize type;
@property(nonatomic, readonly) NSString *trackType;

@end
