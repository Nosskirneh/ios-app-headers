//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSString;

@interface EDAMgetResourceByHash_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    NSString *__noteGuid;
    NSData *__contentHash;
    _Bool __withData;
    _Bool __withRecognition;
    _Bool __withAlternateData;
    _Bool __authenticationToken_isset;
    _Bool __noteGuid_isset;
    _Bool __contentHash_isset;
    _Bool __withData_isset;
    _Bool __withRecognition_isset;
    _Bool __withAlternateData_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetWithAlternateData;
- (_Bool)withAlternateDataIsSet;
@property(nonatomic, getter=withAlternateData, setter=setWithAlternateData:) _Bool withAlternateData; // @dynamic withAlternateData;
- (void)unsetWithRecognition;
- (_Bool)withRecognitionIsSet;
@property(nonatomic, getter=withRecognition, setter=setWithRecognition:) _Bool withRecognition; // @dynamic withRecognition;
- (void)unsetWithData;
- (_Bool)withDataIsSet;
@property(nonatomic, getter=withData, setter=setWithData:) _Bool withData; // @dynamic withData;
- (void)unsetContentHash;
- (_Bool)contentHashIsSet;
@property(retain, nonatomic, getter=contentHash, setter=setContentHash:) NSData *contentHash; // @dynamic contentHash;
- (void)unsetNoteGuid;
- (_Bool)noteGuidIsSet;
@property(retain, nonatomic, getter=noteGuid, setter=setNoteGuid:) NSString *noteGuid; // @dynamic noteGuid;
- (void)unsetAuthenticationToken;
- (_Bool)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken; // @dynamic authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 noteGuid:(id)arg2 contentHash:(id)arg3 withData:(_Bool)arg4 withRecognition:(_Bool)arg5 withAlternateData:(_Bool)arg6;

@end

