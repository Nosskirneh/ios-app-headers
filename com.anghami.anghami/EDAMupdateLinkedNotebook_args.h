//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMLinkedNotebook, NSString;

@interface EDAMupdateLinkedNotebook_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    EDAMLinkedNotebook *__linkedNotebook;
    _Bool __authenticationToken_isset;
    _Bool __linkedNotebook_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetLinkedNotebook;
- (_Bool)linkedNotebookIsSet;
@property(retain, nonatomic, getter=linkedNotebook, setter=setLinkedNotebook:) EDAMLinkedNotebook *linkedNotebook; // @dynamic linkedNotebook;
- (void)unsetAuthenticationToken;
- (_Bool)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken; // @dynamic authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 linkedNotebook:(id)arg2;

@end

