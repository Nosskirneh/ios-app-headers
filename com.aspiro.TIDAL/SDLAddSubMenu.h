//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCRequest.h"

@class NSNumber, NSString;
@protocol SDLInt;

@interface SDLAddSubMenu : SDLRPCRequest
{
}

@property(retain, nonatomic) NSString *menuName;
@property(retain, nonatomic) NSNumber<SDLInt> *position;
@property(retain, nonatomic) NSNumber<SDLInt> *menuID;
- (id)initWithId:(unsigned int)arg1 menuName:(id)arg2;
- (id)initWithId:(unsigned int)arg1 menuName:(id)arg2 position:(unsigned char)arg3;
- (id)init;

@end

