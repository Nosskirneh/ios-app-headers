//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;
@protocol ELMTemplateLoaderSubscriber;

@protocol ELMTemplateLoader <NSObject>
- (void)unsubscribe:(id <ELMTemplateLoaderSubscriber>)arg1 fromTemplateURI:(NSString *)arg2;
- (void)subscribe:(id <ELMTemplateLoaderSubscriber>)arg1 toTemplateURI:(NSString *)arg2;
- (NSArray *)allURIs;
- (void)clearCachedTemplates;
- (void)cacheSerializedTemplate:(NSData *)arg1 withURI:(NSString *)arg2;
-     // Error parsing type: v32@0:8^{TemplateConfig=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}16@"NSString"24, name: cacheTemplate:withURI:
-     // Error parsing type: r^{TemplateConfig=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}24@0:8@"NSString"16, name: cachedTemplateForURI:
- (_Bool)hasTemplateWithURI:(NSString *)arg1;
-     // Error parsing type: v32@0:8@"NSString"16@?<v@?^{TemplateConfig=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}@"NSError">24, name: templateForURI:completionBlock:
@end

