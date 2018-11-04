//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface XMPPStreamManagementOutgoingStanza : NSObject <NSCopying, NSCoding>
{
    _Bool awaitingStanzaId;
    id stanzaId;
}

@property(retain, nonatomic) id stanzaId; // @synthesize stanzaId;
@property(nonatomic) _Bool awaitingStanzaId; // @synthesize awaitingStanzaId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStanzaId:(id)arg1;
- (id)initAwaitingStanzaId;

@end

