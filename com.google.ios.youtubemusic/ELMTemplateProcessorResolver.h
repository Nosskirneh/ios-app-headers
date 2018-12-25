//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ELMTemplateProcessorResolver : NSObject
{
    struct unordered_map<int, ELMElement *(^)(const youtube::elements::TemplateConfig &, const youtube::elements::Element &, id<ELMContext>), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, ELMElement *(^)(const youtube::elements::TemplateConfig &, const youtube::elements::Element &, id<ELMContext>)>>> _blocks;
    struct DefaultTemplateResultCache _defaultTemplateResultCache;
    struct ClientTemplateProvider *_templateProvider;
    struct unique_ptr<youtube::elements::templates::DefaultTemplateProvider, std::__1::default_delete<youtube::elements::templates::DefaultTemplateProvider>> _defaultTemplateProvider;
    struct unique_ptr<youtube::elements::templates::DevTemplateProvider, std::__1::default_delete<youtube::elements::templates::DevTemplateProvider>> _devTemplateProvider;
    struct unique_ptr<youtube::elements::templates::DecoratorResolver, std::__1::default_delete<youtube::elements::templates::DecoratorResolver>> _decoratorResolver;
    struct unique_ptr<youtube::elements::templates::TemplateResolver, std::__1::default_delete<youtube::elements::templates::TemplateResolver>> _resolver;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)registerCoreResolvers;
- (void)registerCoreProcessors;
- (void)cacheTemplateResult:(id)arg1 withIdentifier:(unsigned long long)arg2;
- (struct ClientTemplateProvider *)templateProvider;
-     // Error parsing type: @40@0:8r^{TemplateConfig=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}16r^{Element=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<youtube::elements::Element>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Type}^{Properties}}24@32, name: resolveTemplateProcessor:component:context:
- (void)registerTemplateConfigExtension:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

@end

