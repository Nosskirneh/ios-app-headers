//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSString;

@interface SDLImage : SDLRPCStruct
{
}

@property(retain, nonatomic) NSString *imageType;
@property(retain, nonatomic) NSString *value;
- (id)initWithStaticImageValue:(unsigned short)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 ofType:(id)arg2;

@end

