//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, _TtC4WiMP12SonosService, _TtC4WiMP27SonosUniversalMusicObjectId;

@interface _TtC4WiMP14SonosContainer : NSObject
{
    // Error parsing type: , name: name
    // Error parsing type: , name: type
    // Error parsing type: , name: id
    // Error parsing type: , name: service
    // Error parsing type: , name: imageUrl
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)getParameterTypes;
- (id)initWithName:(id)arg1 type:(id)arg2 id:(id)arg3 service:(id)arg4 imageUrl:(id)arg5;
@property(nonatomic, copy) NSString *imageUrl; // @synthesize imageUrl;
@property(nonatomic, retain) _TtC4WiMP12SonosService *service; // @synthesize service;
@property(nonatomic, retain) _TtC4WiMP27SonosUniversalMusicObjectId *id; // @synthesize id;
@property(nonatomic, copy) NSString *type; // @synthesize type;
@property(nonatomic, copy) NSString *name; // @synthesize name;

@end

