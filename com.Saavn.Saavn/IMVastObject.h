//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMVastObject : NSObject
{
    NSMutableDictionary *_vastRepresentation;
}

@property(retain, nonatomic) NSMutableDictionary *vastRepresentation; // @synthesize vastRepresentation=_vastRepresentation;
- (void).cxx_destruct;
- (id)getDictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
