//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSDictionary, NSString;

@interface FacebookRegisterLoader : Loader
{
    unsigned long long _registerType;
    NSString *_facebookDisplay;
    NSString *_facebookId;
    NSString *_facebookToken;
    NSDictionary *_params;
}

@property(readonly, nonatomic) unsigned long long registerType; // @synthesize registerType=_registerType;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *facebookToken; // @synthesize facebookToken=_facebookToken;
@property(retain, nonatomic) NSString *facebookId; // @synthesize facebookId=_facebookId;
@property(retain, nonatomic) NSString *facebookDisplay; // @synthesize facebookDisplay=_facebookDisplay;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (id)initWithDelegate:(id)arg1 facebookDisplay:(id)arg2 facebookId:(id)arg3 facebookToken:(id)arg4 registerType:(unsigned long long)arg5 additionalParams:(id)arg6;
- (id)initWithDelegate:(id)arg1 facebookDisplay:(id)arg2 facebookId:(id)arg3 facebookToken:(id)arg4 registerType:(unsigned long long)arg5;
- (int)type;

@end

