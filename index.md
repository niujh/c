# Posts

## Clang

{% for post in site.posts %}
    <h2><a href="{{ post.url }}"> :point_right: {{ post.title }}</a></h2>
{% endfor %}

## PTA

{% for post in site.ptaposts %}
    <h2><a href="{{ post.url }}"> :point_right: {{ post.title }}</a></h2>
{% endfor %}
