//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, _TtC4WiMP11SonosArtist, _TtC4WiMP27SonosUniversalMusicObjectId, _TtC4WiMP9SonosShow;

@interface _TtC4WiMP12SonosPodcast : NSObject
{
    // Error parsing type: , name: artist
    // Error parsing type: , name: show
    // Error parsing type: , name: id
    // Error parsing type: , name: name
    // Error parsing type: , name: type
    // Error parsing type: , name: imageUrl
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(nonatomic, readonly) NSString *trackType;
- (id)getParameters;
- (id)initWithId:(id)arg1 name:(id)arg2 imageUrl:(id)arg3 artist:(id)arg4 show:(id)arg5;
@property(nonatomic, copy) NSString *imageUrl; // @synthesize imageUrl;
@property(nonatomic, copy) NSString *type; // @synthesize type;
@property(nonatomic, copy) NSString *name; // @synthesize name;
@property(nonatomic, retain) _TtC4WiMP27SonosUniversalMusicObjectId *id; // @synthesize id;
@property(nonatomic, retain) _TtC4WiMP9SonosShow *show; // @synthesize show;
@property(nonatomic, retain) _TtC4WiMP11SonosArtist *artist; // @synthesize artist;

@end

