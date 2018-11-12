//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LOTKeyframeGroup, NSString;

@interface LOTShapeTrimPath : NSObject
{
    NSString *_keyname;
    LOTKeyframeGroup *_start;
    LOTKeyframeGroup *_end;
    LOTKeyframeGroup *_offset;
}

@property(readonly, nonatomic) LOTKeyframeGroup *offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) LOTKeyframeGroup *end; // @synthesize end=_end;
@property(readonly, nonatomic) LOTKeyframeGroup *start; // @synthesize start=_start;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end

