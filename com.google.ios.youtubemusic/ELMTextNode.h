//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTextNode.h"

#import "ASTextNodeDelegate-Protocol.h"
#import "ELMDisplayNode-Protocol.h"

@class ELMElement, NSString;
@protocol ELMContext;

@interface ELMTextNode : ASTextNode <ASTextNodeDelegate, ELMDisplayNode>
{
    id <ELMContext> _context;
    ELMElement *_element;
}

+ (_Bool)hasCommandRuns:(id)arg1;
+ (_Bool)canBeLayerBacked:(id)arg1 withContext:(id)arg2;
@property(readonly, nonatomic) ELMElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
-     // Error parsing type: {SenderState=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}16@0:8, name: senderState
- (void)textNode:(id)arg1 longPressedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4 textRange:(struct _NSRange)arg5;
- (void)textNode:(id)arg1 tappedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4 textRange:(struct _NSRange)arg5;
- (_Bool)performAccessibilityCustomAction:(id)arg1;
- (_Bool)managesGestureHandling;
- (void)setElement:(id)arg1 previousElement:(id)arg2;
- (void)controllerDidApplyProperties;
- (id)initWithElement:(id)arg1 context:(id)arg2;
- (id)initWithElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
