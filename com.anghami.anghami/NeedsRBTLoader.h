//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSString;

@interface NeedsRBTLoader : Loader
{
    NSString *_phoneNumber;
}

@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (int)type;
- (id)generateRequest;
- (id)initWithPhoneNumber:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;

@end

