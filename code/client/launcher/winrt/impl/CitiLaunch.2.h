// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201201.7

#ifndef WINRT_CitiLaunch_2_H
#define WINRT_CitiLaunch_2_H
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.1.h"
#include "winrt/impl/CitiLaunch.1.h"
WINRT_EXPORT namespace winrt::CitiLaunch
{
    struct __declspec(empty_bases) BackdropBrush : CitiLaunch::IBackdropBrush,
        impl::base<BackdropBrush, Windows::UI::Xaml::Media::XamlCompositionBrushBase, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
        impl::require<BackdropBrush, Windows::UI::Xaml::Media::IXamlCompositionBrushBase, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IBrushOverrides2, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        BackdropBrush(std::nullptr_t) noexcept {}
        BackdropBrush(void* ptr, take_ownership_from_abi_t) noexcept : CitiLaunch::IBackdropBrush(ptr, take_ownership_from_abi) {}
        BackdropBrush();
    };
}
#endif
