//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;
@protocol ELMDecoratorLoaderSubscriber;

@protocol ELMDecoratorLoader <NSObject>
- (void)unsubscribe:(id <ELMDecoratorLoaderSubscriber>)arg1 fromDecoratorURI:(NSString *)arg2;
- (void)subscribe:(id <ELMDecoratorLoaderSubscriber>)arg1 toDecoratorURI:(NSString *)arg2;
- (NSArray *)allURIs;
- (void)clearCachedDecorators;
- (void)cacheSerializedDecorator:(NSData *)arg1 withURI:(NSString *)arg2;
-     // Error parsing type: v32@0:8^{DecoratorConfig=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}16@"NSString"24, name: cacheDecorator:withURI:
-     // Error parsing type: r^{DecoratorConfig=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}24@0:8@"NSString"16, name: cachedDecoratorForURI:
- (_Bool)hasDecoratorWithURI:(NSString *)arg1;
-     // Error parsing type: v32@0:8@"NSString"16@?<v@?^{DecoratorConfig=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}@"NSError">24, name: decoratorForURI:completionBlock:
@end

