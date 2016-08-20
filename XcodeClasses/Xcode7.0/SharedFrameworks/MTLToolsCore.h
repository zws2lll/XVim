//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct Argument {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned short _field6;
};

struct CoreFunction {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    union {
        unsigned long long _field1;
        unsigned long long _field2;
    } _field5;
    struct Argument _field6;
    struct Argument _field7[16];
    unsigned int _field8;
    unsigned int _field9;
    void *_field10;
    void *_field11;
};

struct Function {
    struct CoreFunction _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
    unsigned short _field5;
    unsigned short _field6;
    int _field7;
    void *_field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    struct Function *_field13;
    void *_field14;
};

struct array_iterator<const GPUTools::FD::Argument> {
    struct Argument *_field1;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct array_iterator<const GPUTools::FD::Argument> {
    struct Argument *_field1;
} array_iterator_bff672d3;

#pragma mark -

//
// File: /Applications/Xcode-7GM.app/Contents/SharedFrameworks/MTLToolsCore.framework/Versions/A/MTLToolsCore
// UUID: F57FE641-17C8-3232-B0FC-F5D86A750987
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 18097.0.0.0.0
//       Minimum Mac OS X version: 10.10.0
//                    SDK version: 10.11.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol DYGraphicsAPIInfo <NSObject>
- (BOOL)supportsCapabilitiesOfGraphicsAPI:(id <DYGraphicsAPIInfo>)arg1;
@end

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(Protocol *)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (BOOL)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol __ARCLiteIndexedSubscripting__
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end

@protocol __ARCLiteKeyedSubscripting__
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@end

@interface DYMTLCommandQueueInfo : NSObject <NSCoding, NSCopying>
{
    BOOL _canBeCaptured;
    unsigned long long _deviceAddress;
    unsigned long long _queueAddress;
    NSString *_label;
}

@property(nonatomic) BOOL canBeCaptured; // @synthesize canBeCaptured=_canBeCaptured;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long queueAddress; // @synthesize queueAddress=_queueAddress;
@property(readonly, nonatomic) unsigned long long deviceAddress; // @synthesize deviceAddress=_deviceAddress;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommandQueue:(id)arg1;

@end

@interface DYMTLDeviceProfile : NSObject <DYGraphicsAPIInfo, NSCoding, NSCopying>
{
    NSArray *_supportedFeatureSets;
    NSString *_name;
}

+ (void)load;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *supportedFeatureSets; // @synthesize supportedFeatureSets=_supportedFeatureSets;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithDevice:(id)arg1;
- (BOOL)supportsCapabilitiesOfGraphicsAPI:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface DYMTLFunctionTracer : DYFunctionTracer
{
}

+ (void)initialize;
- (id)variableForReceiverIDNumber:(id)arg1;
- (id)variableForReceiverID:(unsigned long long)arg1;
- (unsigned int)_objectNameFromVariable:(const char *)arg1;
- (void)_prependReceiver:(id)arg1 function:(const struct Function *)arg2;
- (void)_setCurrentReceiver:(const struct Function *)arg1;
- (id)_stringWithNumber:(id)arg1 argument:(const struct Argument *)arg2;
- (void)_appendTraceLine:(id)arg1 withFunction:(const struct Function *)arg2 iterArgument:(array_iterator_bff672d3)arg3 argumentStrings:(id)arg4 returnVariable:(id)arg5;

@end

