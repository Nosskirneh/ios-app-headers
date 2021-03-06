//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContentSectionLoader.h"

@class NSDictionary, NSString, User;

@interface ProfileLoader : ContentSectionLoader
{
    _Bool _isProfileBlocked;
    User *_user;
    NSDictionary *_parameters;
    NSString *_profileId;
}

@property(copy, nonatomic) NSString *profileId; // @synthesize profileId=_profileId;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly) _Bool isProfileBlocked; // @synthesize isProfileBlocked=_isProfileBlocked;
@property(readonly) User *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (_Bool)allowNoSections;
- (_Bool)didHandleParsingData:(id)arg1;
- (id)requestParams;
- (id)actionString;
- (int)type;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1 profileId:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1 profileId:(id)arg2 andParameters:(id)arg3;

@end

