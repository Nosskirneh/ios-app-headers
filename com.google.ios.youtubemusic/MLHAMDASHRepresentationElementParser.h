//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMDASHRepresentationElementParser.h"

@class YTIFormatStream;

@interface MLHAMDASHRepresentationElementParser : HAMDASHRepresentationElementParser
{
    YTIFormatStream *_formatStream;
    int _projectionType;
    int _stereoLayout;
}

@property(nonatomic) int stereoLayout; // @synthesize stereoLayout=_stereoLayout;
@property(nonatomic) int projectionType; // @synthesize projectionType=_projectionType;
- (void).cxx_destruct;
- (void)setFormatInBuilder;
- (_Bool)parseAttribute:(const char *)arg1 value:(const char *)arg2 valueLength:(unsigned long long)arg3;
- (id)initWithFactory:(id)arg1;

@end

