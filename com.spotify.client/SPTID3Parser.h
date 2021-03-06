//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableData, SPTID3ParserFrameFactory;
@protocol SPTID3ParserDelegate;

@interface SPTID3Parser : NSObject
{
    _Bool _loaded;
    id <SPTID3ParserDelegate> _delegate;
    NSMutableData *_data;
    long long _tagSize;
    NSMutableArray *_mutableFrames;
    SPTID3ParserFrameFactory *_frameFactory;
    struct SPTID3ParserHeaderStruct _header;
}

@property(retain, nonatomic) SPTID3ParserFrameFactory *frameFactory; // @synthesize frameFactory=_frameFactory;
@property(retain, nonatomic) NSMutableArray *mutableFrames; // @synthesize mutableFrames=_mutableFrames;
@property(nonatomic) long long tagSize; // @synthesize tagSize=_tagSize;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) __weak id <SPTID3ParserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct SPTID3ParserHeaderStruct header; // @synthesize header=_header;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
- (void).cxx_destruct;
- (void)attemptParse;
@property(readonly, nonatomic) NSArray *frames;
- (void)appendData:(id)arg1;
- (id)init;

@end

