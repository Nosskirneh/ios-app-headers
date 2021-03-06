//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMSharedNotebook, NSString;

@interface EDAMcreateSharedNotebook_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    EDAMSharedNotebook *__sharedNotebook;
    _Bool __authenticationToken_isset;
    _Bool __sharedNotebook_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSharedNotebook;
- (_Bool)sharedNotebookIsSet;
@property(retain, nonatomic, getter=sharedNotebook, setter=setSharedNotebook:) EDAMSharedNotebook *sharedNotebook; // @dynamic sharedNotebook;
- (void)unsetAuthenticationToken;
- (_Bool)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken; // @dynamic authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 sharedNotebook:(id)arg2;

@end

