//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class ELMDiffIdentifier;

@interface ELMDiffableElement : NSObject <IGListDiffable>
{
    // Error parsing type: {Element="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadataWithArena="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"Ai}}"child_elements_"{RepeatedPtrField<youtube::elements::Element>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}}"key_"{ArenaStringPtr="ptr_"^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}"type_"^{Type}"properties_"^{Properties}}, name: _element
    ELMDiffIdentifier *_identifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
-     // Error parsing type: @40@0:8r^{Element=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<youtube::elements::Element>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Type}^{Properties}}16@24@32, name: initWithElement:key:context:

@end

