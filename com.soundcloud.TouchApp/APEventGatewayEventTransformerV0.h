//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APEventTransformer-Protocol.h"

@class APEventGatewayEventNameMapper, NSString, _TtC10SoundCloud32APEventGatewayAttributesProvider;

@interface APEventGatewayEventTransformerV0 : NSObject <APEventTransformer>
{
    NSString *_clientId;
    APEventGatewayEventNameMapper *_nameMapper;
    _TtC10SoundCloud32APEventGatewayAttributesProvider *_attributesProvider;
}

@property(readonly, nonatomic) _TtC10SoundCloud32APEventGatewayAttributesProvider *attributesProvider; // @synthesize attributesProvider=_attributesProvider;
@property(readonly, nonatomic) APEventGatewayEventNameMapper *nameMapper; // @synthesize nameMapper=_nameMapper;
@property(readonly, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (id)ignoredAttributes;
- (id)transformedAttributes:(id)arg1 forClickEvent:(id)arg2;
- (id)transformedAttributesForEvent:(id)arg1;
- (id)transform:(id)arg1;
- (id)supportedVersions;
- (id)initWithAttributesProvider:(id)arg1 nameMapper:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

