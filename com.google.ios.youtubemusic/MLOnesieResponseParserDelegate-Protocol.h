//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, YTIOnesiePlayerResponse;

@protocol MLOnesieResponseParserDelegate <NSObject>
- (void)onesieResponseParserDidFailWithError:(NSError *)arg1;
-     // Error parsing type: v24@0:8r^{OnesieHeader=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<std::__1::basic_string<char> >=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{OnesieHeader_PlayerResponseMetadata}^{OnesieHeader_ByteRange}QqqBi}16, name: onesieResponseParserDidParseRestrictedMediaFormatsHint:
- (void)onesieResponseParserDidParseMediaServerHostname:(NSString *)arg1;
-     // Error parsing type: v32@0:8@"NSData"16r^{OnesieHeader=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<std::__1::basic_string<char> >=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{OnesieHeader_PlayerResponseMetadata}^{OnesieHeader_ByteRange}QqqBi}24, name: onesieResponseParserDidParseMediaData:header:
-     // Error parsing type: v32@0:8@"NSData"16r^{OnesieHeader=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<std::__1::basic_string<char> >=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{OnesieHeader_PlayerResponseMetadata}^{OnesieHeader_ByteRange}QqqBi}24, name: onesieResponseParserDidParseInitSegment:header:
- (void)onesieResponseParserDidParsePlayerResponse:(YTIOnesiePlayerResponse *)arg1;
- (void)onesieResponseParserDidParseAck;
@end
