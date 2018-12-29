//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TWTRScribeSerializable-Protocol.h"

@class NSString;

@interface TWTRScribeClientEventNamespace : NSObject <TWTRScribeSerializable>
{
    NSString *_client;
    NSString *_page;
    NSString *_section;
    NSString *_component;
    NSString *_element;
    NSString *_action;
}

+ (id)errorNamespace;
+ (id)scribeKey;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *element; // @synthesize element=_element;
@property(readonly, copy, nonatomic) NSString *component; // @synthesize component=_component;
@property(readonly, copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(readonly, copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(readonly, copy, nonatomic) NSString *client; // @synthesize client=_client;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithClient:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5 action:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
