//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GWAComponentMetadata : NSObject
{
    id _component;
    unsigned long long _componentType;
}

@property(readonly, nonatomic) unsigned long long componentType; // @synthesize componentType=_componentType;
@property(readonly, nonatomic) id component; // @synthesize component=_component;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long uiReference;
- (id)initWithComponent:(id)arg1 componentType:(unsigned long long)arg2;

@end

