//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC6Deezer17ProtobufInterface;

@interface DZRProtobufInterface : NSObject
{
    _TtC6Deezer17ProtobufInterface *_interface;
}

@property(retain, nonatomic) _TtC6Deezer17ProtobufInterface *interface; // @synthesize interface=_interface;
- (void).cxx_destruct;
- (id)protobufBinaryToDictionary:(id)arg1 messageType:(unsigned long long)arg2;
- (id)protobufBinaryToJSONData:(id)arg1 messageType:(unsigned long long)arg2;
- (id)protobufBinaryToString:(id)arg1 messageType:(unsigned long long)arg2;
- (id)protobufJSONDataToBinary:(id)arg1 messageType:(unsigned long long)arg2;
- (id)init;
- (id)giveARandomListChangedBinaryWithNumberOfTracks:(long long)arg1;

@end

